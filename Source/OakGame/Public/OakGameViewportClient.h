#pragma once
#include "CoreMinimal.h"
#include "Engine/GameViewportClient.h"
#include "OakGameViewportClient.generated.h"

UCLASS(NonTransient)
class UOakGameViewportClient : public UGameViewportClient {
    GENERATED_BODY()
public:
    UOakGameViewportClient();
    UFUNCTION(Exec)
    void SetTwoPlayerSplitScreenType(const FString& SplitScreenType);
    
};

