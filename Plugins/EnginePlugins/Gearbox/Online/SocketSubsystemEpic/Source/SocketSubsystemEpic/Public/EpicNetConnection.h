#pragma once
#include "CoreMinimal.h"
#include "IpConnection.h"
#include "EpicNetConnection.generated.h"

UCLASS(NonTransient)
class UEpicNetConnection : public UIpConnection {
    GENERATED_BODY()
public:
    UEpicNetConnection();
};

