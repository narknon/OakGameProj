#pragma once
#include "CoreMinimal.h"
#include "GbxAction_SimpleAnim.h"
#include "AnimMeshList.h"
#include "AnimActionDef.h"
#include "GbxAction_Launch.generated.h"

class UAnimSequenceBase;

UCLASS()
class GBXGAMESYSTEMCORE_API UGbxAction_Launch : public UGbxAction_SimpleAnim {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    float VelocityMinimum;
    
    UPROPERTY(EditAnywhere)
    float VelocityScale;
    
    UPROPERTY(EditAnywhere)
    float VelocityUpBoost;
    
    UPROPERTY(EditAnywhere)
    float RotationTime;
    
    UPROPERTY(EditAnywhere)
    FAnimMeshList InAirAnims;
    
    UPROPERTY(EditAnywhere)
    FAnimMeshList RecoveryAnims;
    
    UPROPERTY(EditAnywhere)
    float BlendInTime;
    
    UPROPERTY(EditAnywhere)
    float BlendOutTime;
    
    UPROPERTY(EditAnywhere)
    FName AnimSlot;
    
    UPROPERTY()
    UAnimSequenceBase* AnimInAir;
    
    UPROPERTY()
    UAnimSequenceBase* AnimRecovery;
    
    UPROPERTY()
    FAnimActionDef InAirAnim;
    
    UPROPERTY()
    FAnimActionDef RecoveryAnim;
    
public:
    UGbxAction_Launch();
};

