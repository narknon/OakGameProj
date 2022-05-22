#pragma once
#include "CoreMinimal.h"
#include "AudioPrepLocationFinder.h"
#include "AudioPrepLocationFinder_TraceDownToActor.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UAudioPrepLocationFinder_TraceDownToActor : public UAudioPrepLocationFinder {
    GENERATED_BODY()
public:
    UAudioPrepLocationFinder_TraceDownToActor();
};

