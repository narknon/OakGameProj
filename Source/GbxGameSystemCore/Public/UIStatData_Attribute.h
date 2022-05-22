#pragma once
#include "CoreMinimal.h"
#include "UIStatData_Numeric.h"
#include "UIStatData_Attribute.generated.h"

class UGbxAttributeData;
class UUIStatData;

UCLASS(EditInlineNew)
class GBXGAMESYSTEMCORE_API UUIStatData_Attribute : public UUIStatData_Numeric {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UGbxAttributeData* Attribute;
    
    UPROPERTY(EditAnywhere)
    TArray<UUIStatData*> OtherComparableStats;
    
    UPROPERTY(EditAnywhere)
    TArray<UUIStatData*> StatsToReplace;
    
    UUIStatData_Attribute();
};

