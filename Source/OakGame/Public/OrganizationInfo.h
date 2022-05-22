#pragma once
#include "CoreMinimal.h"
#include "OrganizationInfo.generated.h"

USTRUCT(BlueprintType)
struct OAKGAME_API FOrganizationInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName OrganizationId;
    
    UPROPERTY(EditAnywhere)
    FName TextStyle;
    
    UPROPERTY(EditAnywhere)
    FText TextEntry;
    
    FOrganizationInfo();
};

