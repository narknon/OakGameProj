#pragma once
#include "CoreMinimal.h"
#include "GbxAction_SimpleAnim.h"
#include "AnimMeshList.h"
#include "WeightedAnim.h"
#include "LoopAnimData.h"
#include "GbxParam.h"
#include "GbxAction_Loop.generated.h"

class UGbxCondition;
class AActor;

UCLASS()
class GBXGAMESYSTEMCORE_API UGbxAction_Loop : public UGbxAction_SimpleAnim {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FAnimMeshList AnimStart;
    
    UPROPERTY(EditAnywhere)
    TArray<FWeightedAnim> AnimLoopList;
    
    UPROPERTY(EditAnywhere)
    FAnimMeshList AnimStop;
    
    UPROPERTY(EditAnywhere)
    float BlendInTime;
    
    UPROPERTY(EditAnywhere)
    float BlendOutTime;
    
    UPROPERTY(EditAnywhere)
    float StartToLoopBlendTime;
    
    UPROPERTY(EditAnywhere)
    float LoopToLoopBlendTime;
    
    UPROPERTY(EditAnywhere)
    float LoopToStopBlendTime;
    
    UPROPERTY(EditAnywhere)
    FName AnimSlot;
    
    UPROPERTY(EditAnywhere)
    bool bLetLoopFinish;
    
    UPROPERTY(EditAnywhere)
    FGbxParam LoopCount;
    
    UPROPERTY(EditAnywhere)
    bool bUseLoopCount;
    
    UPROPERTY(EditAnywhere)
    FGbxParam LoopTime;
    
    UPROPERTY(EditAnywhere)
    bool bUseLoopTime;
    
    UPROPERTY(EditAnywhere, Instanced)
    UGbxCondition* LoopCondition;
    
    UPROPERTY(EditAnywhere)
    bool bUseLoopCondition;
    
    UPROPERTY()
    FLoopAnimData AnimData3rd;
    
    UPROPERTY()
    bool bPlay3rd;
    
    UPROPERTY()
    FLoopAnimData AnimData1st;
    
    UPROPERTY()
    bool bPlay1st;
    
    UPROPERTY()
    FAnimMeshList AnimLoop;
    
public:
    UGbxAction_Loop();
    UFUNCTION(BlueprintNativeEvent)
    void OnStop(AActor* Actor);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnLoop(AActor* Actor);
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void K2_StopLooping() const;
    
};

