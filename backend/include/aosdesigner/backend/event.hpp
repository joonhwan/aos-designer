#ifndef HGUARD_AOSD_BACKEND_EVENT_HPP__
#define HGUARD_AOSD_BACKEND_EVENT_HPP__

#include <aosdesigner/backend/id.hpp>

namespace aosd {
namespace backend {
namespace event {
	
	template< class EventImpl >
	struct ProjectEvent { ProjectId project_id; };

	template< class E >
	struct SequenceEvent : public ProjectEvent<E> 
	{ SequenceId sequence_id; };

	template< class E >
	struct EditorEvent : public SequenceEvent<E> 
	{ EditorId editor_id; };

	struct ProjectOpen		: public ProjectEvent<ProjectOpen> {};
	struct ProjectClosed	: public ProjectEvent<ProjectClosed> {};

	struct SequenceAdded	: public SequenceEvent<SequenceAdded> {};
	struct SequenceRemoved	: public SequenceEvent<SequenceRemoved> {};

	struct EditorBegin		: public EditorEvent<EditorBegin> {};
	struct EditorEnd		: public EditorEvent<EditorEnd> {};

}}}

#endif
