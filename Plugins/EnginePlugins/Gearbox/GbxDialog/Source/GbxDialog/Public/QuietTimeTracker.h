#pragma once
#include "CoreMinimal.h"
#include "QuietTimeTracker.generated.h"

class UObject;
class UQuietTimePredicate;

USTRUCT(BlueprintType)
struct FQuietTimeTracker {
    GENERATED_BODY()
public:
    UPROPERTY()
    TWeakObjectPtr<UObject> KeyObject;
    
    UPROPERTY()
    TWeakObjectPtr<UObject> ScopeObject;
    
    UPROPERTY()
    UQuietTimePredicate* ScopePredicate;
    
    GBXDIALOG_API FQuietTimeTracker();
};

