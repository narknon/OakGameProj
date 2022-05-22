#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CSPuzzleSession.generated.h"

class UTutorialPuzzle;
class UCSAction;

UCLASS()
class UCSPuzzleSession : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TArray<UCSAction*> PuzzleActions;
    
    UPROPERTY(Transient)
    UTutorialPuzzle* TutorialPuzzle;
    
public:
    UCSPuzzleSession();
};

