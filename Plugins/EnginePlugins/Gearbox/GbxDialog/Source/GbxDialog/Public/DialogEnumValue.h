#pragma once
#include "CoreMinimal.h"
#include "DialogEnumValueInterface.h"
#include "GbxDialogDataAsset.h"
#include "DialogEnumValue.generated.h"

class UDialogEnumType;
class UGbxUIName;

UCLASS()
class GBXDIALOG_API UDialogEnumValue : public UGbxDialogDataAsset, public IDialogEnumValueInterface {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, EditAnywhere)
    UDialogEnumType* EnumType;
    
    UPROPERTY(EditAnywhere)
    UGbxUIName* UIName;
    
    UPROPERTY(EditAnywhere)
    bool bRestrictedQualifier;
    
    UDialogEnumValue();
    
    // Fix for true pure virtual functions not being implemented
};

