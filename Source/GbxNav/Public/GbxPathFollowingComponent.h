#pragma once
#include "CoreMinimal.h"
#include "HavokPathFollowingComponent.h"
#include "GbxPathFollowingComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXNAV_API UGbxPathFollowingComponent : public UHavokPathFollowingComponent {
    GENERATED_BODY()
public:
    UGbxPathFollowingComponent();
};

