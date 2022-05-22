#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "GbxTriggerProperty.h"
#include "GbxAnimTable.generated.h"

class UDataTable;

UCLASS(Abstract)
class GBXGAMESYSTEMCORE_API UGbxAnimTable : public UGbxDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, Transient)
    FGbxTriggerProperty TriggerAutofill;
    
    UPROPERTY(EditAnywhere, Instanced)
    UDataTable* DataTable;
    
    UPROPERTY(EditAnywhere)
    bool bScaleRateByMeshScale;
    
public:
    UGbxAnimTable();
protected:
    UFUNCTION()
    void Autofill();
    
};

