#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "CreditsTableRow.generated.h"

USTRUCT()
struct FCreditsTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString FirstName;
    
    UPROPERTY(EditAnywhere)
    FString LastName;
    
    UPROPERTY(EditAnywhere)
    FName Title;
    
    UPROPERTY(EditAnywhere)
    FName Organization;
    
    UPROPERTY(EditAnywhere)
    FString ExtraText;
    
    UPROPERTY(EditAnywhere)
    FName ExtraTextStyle;
    
    OAKGAME_API FCreditsTableRow();
};

