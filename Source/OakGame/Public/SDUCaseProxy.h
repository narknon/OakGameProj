#pragma once
#include "CoreMinimal.h"
#include "AdvancedInteractiveObjectProxy.h"
#include "SDUCaseSpawner.h"
#include "UObject/NoExportTypes.h"
#include "SDUCaseProxy.generated.h"

class UMaterialInstanceConstant;
class UOakSDUData;
class USocketComponent;

UCLASS(NonTransient)
class ASDUCaseProxy : public AAdvancedInteractiveObjectProxy {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FSDUCaseSpawner> SDUs;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName InitialCameraTarget;
    
    UPROPERTY()
    UMaterialInstanceConstant* SelectedSDUMaterial;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MaxSelectionAngle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MaxSelectionDistance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float AngleWeight;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float DistanceWeight;
    
public:
    ASDUCaseProxy();
    UFUNCTION(BlueprintCallable)
    void PurchaseSDU();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSDUSoldOut(UOakSDUData* SoldOutSDU, USocketComponent* AttachmentSocket);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSDUSelected(UOakSDUData* NewSDU, USocketComponent* NewAttachmentSocket, UOakSDUData* OldSDU, USocketComponent* OldAttachmentSocket);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSDUPurchased(UOakSDUData* PurchasedSDU, USocketComponent* AttachmentSocket);
    
    UFUNCTION(BlueprintCallable)
    void OnAxisInput(FVector Vec, bool bGamePad);
    
    UFUNCTION(BlueprintCallable)
    void NavigateUp();
    
    UFUNCTION(BlueprintCallable)
    void NavigateRight();
    
    UFUNCTION(BlueprintCallable)
    void NavigateLeft();
    
    UFUNCTION(BlueprintCallable)
    void NavigateDown();
    
    UFUNCTION(BlueprintCallable)
    void ExitCase();
    
};

