#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "NewGameSettings.generated.h"

UCLASS(Config=Game)
class OAKGAME_API UNewGameSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config)
    int32 CharacterSelectTimeInSeconds;
    
    UPROPERTY(Config)
    int32 CharacterSelectQuickStartTimeInSeconds;
    
    UPROPERTY(Config)
    FName NewGameMap;
    
    UPROPERTY(Config)
    FName CharacterSelectCompletionEvent;
    
    UPROPERTY(Config)
    TArray<FString> IntroMovies;
    
    UNewGameSettings();
};

