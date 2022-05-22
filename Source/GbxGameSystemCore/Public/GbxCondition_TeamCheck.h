#pragma once
#include "CoreMinimal.h"
#include "GbxCondition.h"
#include "GbxCondition_TeamCheck.generated.h"

class UTeam;

UCLASS(CollapseCategories, Const, EditInlineNew)
class GBXGAMESYSTEMCORE_API UGbxCondition_TeamCheck : public UGbxCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UTeam* InputTeam;
    
public:
    UGbxCondition_TeamCheck();
};

