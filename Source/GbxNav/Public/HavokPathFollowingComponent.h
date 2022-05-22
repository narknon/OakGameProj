#pragma once
#include "CoreMinimal.h"
#include "Navigation/PathFollowingComponent.h"
#include "HavokPathFollowingComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXNAV_API UHavokPathFollowingComponent : public UPathFollowingComponent {
    GENERATED_BODY()
public:
    UHavokPathFollowingComponent();
};

