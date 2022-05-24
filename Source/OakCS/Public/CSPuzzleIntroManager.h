#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CSPuzzleIntroSettings.h"
#include "CSPuzzleIntroManager.generated.h"

UCLASS(DefaultToInstanced, EditInlineNew)
class OAKCS_API UCSPuzzleIntroManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FCSPuzzleIntroSettings Settings;
    
public:
    UCSPuzzleIntroManager();
};

