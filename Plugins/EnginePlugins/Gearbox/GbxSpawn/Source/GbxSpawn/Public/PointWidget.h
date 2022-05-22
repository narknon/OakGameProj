#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PointWidget.generated.h"

USTRUCT()
struct GBXSPAWN_API FPointWidget {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FTransform Point;
    
    FPointWidget();
};

