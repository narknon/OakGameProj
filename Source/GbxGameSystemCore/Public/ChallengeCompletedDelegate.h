#pragma once
#include "CoreMinimal.h"
#include "ChallengeCompletedDelegate.generated.h"

class AGbxPlayerController;
class UObject;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_RetVal_ThreeParams(bool, FChallengeCompleted, AGbxPlayerController*, CompletedPlayer, UObject*, OtherObject, TArray<FString>&, EnumTags);

