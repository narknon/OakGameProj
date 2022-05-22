#include "ActorTagQuery.h"

FActorTagQuery::FActorTagQuery() {
    this->bIncludeComponents = false;
    this->Mode = EActorTagQueryMode::HasAny;
}

