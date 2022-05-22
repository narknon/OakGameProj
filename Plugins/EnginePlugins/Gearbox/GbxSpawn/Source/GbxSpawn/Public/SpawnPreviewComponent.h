#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GbxTriggerProperty.h"
#include "PreviewComponent.h"
#include "SpawnPreviewState.h"
#include "ECycleDirection.h"
#include "SpawnPreviewComponent.generated.h"

class USpawnerComponent;
class UGbxAction;
class UGbxActionComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXSPAWN_API USpawnPreviewComponent : public UPreviewComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(DuplicateTransient, Transient)
    TArray<FSpawnPreviewState> PreviewList;
    
    UPROPERTY(Transient)
    int32 ActiveSpawnPointIdx;
    
    UPROPERTY(Transient, VisibleAnywhere)
    TSubclassOf<UGbxAction> PreviewAction;
    
    UPROPERTY(EditAnywhere, Transient)
    bool bAutoCycle;
    
    UPROPERTY(EditAnywhere, Transient)
    FGbxTriggerProperty CycleActor;
    
    UPROPERTY(EditAnywhere, Transient)
    bool bShowAction;
    
    UPROPERTY(EditAnywhere, Transient)
    bool bRepeatAction;
    
    UPROPERTY(EditAnywhere, Transient)
    FGbxTriggerProperty ReplayAction;
    
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<UGbxActionComponent> ActionComponent;
    
    UPROPERTY(Export, Transient)
    TArray<USpawnerComponent*> SpawnerList;
    
public:
    USpawnPreviewComponent();
private:
    UFUNCTION()
    void OnReplayAction();
    
    UFUNCTION()
    void OnCycleActor(ECycleDirection Direction);
    
};

