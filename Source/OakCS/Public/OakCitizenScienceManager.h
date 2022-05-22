#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "OakCitizenScienceManager.generated.h"

class UOakCitizenScienceManager;
class UCSPuzzleSession;
class UCSGlobals;

UCLASS(BlueprintType)
class OAKCS_API UOakCitizenScienceManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UCSPuzzleSession* CurrentPuzzleSession;
    
    UPROPERTY(Transient)
    UCSGlobals* CSGlobals;
    
public:
    UOakCitizenScienceManager();
    UFUNCTION(BlueprintCallable)
    static UOakCitizenScienceManager* GetCitizenScienceManager();
    
};

