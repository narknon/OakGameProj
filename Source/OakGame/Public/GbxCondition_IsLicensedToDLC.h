#pragma once
#include "CoreMinimal.h"
#include "GbxCondition.h"
#include "GbxCondition_IsLicensedToDLC.generated.h"

class UDownloadableContentData;

UCLASS(CollapseCategories, EditInlineNew)
class UGbxCondition_IsLicensedToDLC : public UGbxCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    UDownloadableContentData* ContentData;
    
public:
    UGbxCondition_IsLicensedToDLC();
};

