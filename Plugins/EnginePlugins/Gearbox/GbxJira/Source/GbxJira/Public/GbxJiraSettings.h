#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GbxJiraSettings.generated.h"

UCLASS()
class GBXJIRA_API UGbxJiraSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    bool bDisplayInLevelEditor;
    
    UPROPERTY(Config, EditAnywhere)
    int32 BugIconSize;
    
    UGbxJiraSettings();
};

