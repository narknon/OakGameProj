#pragma once
#include "CoreMinimal.h"
#include "GbxAction_SimpleAnim.h"
#include "AnimMeshList.h"
#include "GbxAction_DropshipSpawn.generated.h"

class UAnimSequenceBase;

UCLASS()
class GBXGAMESYSTEMCORE_API UGbxAction_DropshipSpawn : public UGbxAction_SimpleAnim {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FAnimMeshList StartAnims;
    
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
    
    UPROPERTY(EditAnywhere)
    float RotationLerpTime;
    
    UPROPERTY(EditAnywhere)
    float MoveWithSpawnPointTime;
    
    UPROPERTY(EditAnywhere)
    float SwitchToFallingTime;
    
    UPROPERTY()
    UAnimSequenceBase* AnimStart;
    
    UPROPERTY()
    UAnimSequenceBase* AnimInAir;
    
    UPROPERTY()
    UAnimSequenceBase* AnimRecovery;
    
public:
    UGbxAction_DropshipSpawn();
};

