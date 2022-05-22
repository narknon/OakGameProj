#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "AnimNotify_EnableDropLootSocket.generated.h"

UCLASS(CollapseCategories)
class UAnimNotify_EnableDropLootSocket : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TArray<FName> SocketNames;
    
public:
    UAnimNotify_EnableDropLootSocket();
};

