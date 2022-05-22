#pragma once
#include "CoreMinimal.h"
#include "GbxAction_NavJump.h"
#include "GbxAction_NavHomingJump.generated.h"

UCLASS()
class GBXAI_API UGbxAction_NavHomingJump : public UGbxAction_NavJump {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float MaxHomingDistance;
    
public:
    UGbxAction_NavHomingJump();
};

