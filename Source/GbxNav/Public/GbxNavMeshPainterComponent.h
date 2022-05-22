#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "EGbxPainterType.h"
#include "GbxPainterItem.h"
#include "GbxNavMeshPainterComponent.generated.h"

class UNavArea;
class UGbxNavArea;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXNAV_API UGbxNavMeshPainterComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    bool bAlwaysEnabled;
    
private:
    UPROPERTY(EditAnywhere)
    bool bEnabled;
    
    UPROPERTY(EditAnywhere)
    float IdleTime;
    
    UPROPERTY(EditAnywhere)
    EGbxPainterType PainterType;
    
    UPROPERTY(EditAnywhere, NoClear)
    UGbxNavArea* GbxNavArea;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> AssociatedComponentNames;
    
    UPROPERTY(VisibleAnywhere)
    uint32 PainterId;
    
    UPROPERTY(EditAnywhere)
    float PainterMovedThreshold;
    
    UPROPERTY(EditAnywhere)
    bool bBlocksAutoGeneratedUserEdges;
    
    UPROPERTY(Transient)
    TArray<FGbxPainterItem> Painters;
    
    UPROPERTY()
    TSubclassOf<UNavArea> NavArea;
    
public:
    UGbxNavMeshPainterComponent();
    UFUNCTION(BlueprintCallable)
    void SetPainterEnabled(bool bNewEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetPainterAlwaysEnabled(bool bNewAlwaysEnabled);
    
    UFUNCTION(BlueprintCallable)
    void ResetToStatic();
    
    UFUNCTION(BlueprintPure)
    bool IsPainterEnabled() const;
    
};

