#pragma once
#include "CoreMinimal.h"
#include "DownloadableEntitlementSetItem.generated.h"

USTRUCT(BlueprintType)
struct FDownloadableEntitlementSetItem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    int32 ID;
    
    UPROPERTY(EditDefaultsOnly)
    int32 Count;
    
    UPROPERTY(EditDefaultsOnly)
    FText Description;
    
    UPROPERTY(VisibleAnywhere)
    FString SerialNumber;
    
public:
    OAKGAME_API FDownloadableEntitlementSetItem();
};

