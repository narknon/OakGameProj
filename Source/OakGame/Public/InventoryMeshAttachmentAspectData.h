#pragma once
#include "CoreMinimal.h"
#include "InventoryAspectData.h"
#include "InventoryMeshAttachmentAspectData.generated.h"

class UGestaltData;

UCLASS(EditInlineNew)
class UInventoryMeshAttachmentAspectData : public UInventoryAspectData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UGestaltData* GestaltData;
    
    UPROPERTY(EditAnywhere)
    FName ComponentName;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> GestaltMeshPartNames;
    
    UPROPERTY(EditAnywhere)
    FName AttachSocket;
    
    UInventoryMeshAttachmentAspectData();
private:
    UFUNCTION()
    void EnumerateGestaltMeshPartNames(TArray<FName>& OutPartNameList) const;
    
};

