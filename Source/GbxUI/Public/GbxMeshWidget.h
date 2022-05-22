#pragma once
#include "CoreMinimal.h"
#include "Components/Widget.h"
#include "GbxMeshWidget.generated.h"

class USlateVectorArtData;

UCLASS()
class GBXUI_API UGbxMeshWidget : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    USlateVectorArtData* MeshData;
    
    UPROPERTY(EditAnywhere)
    int32 MaxNumUnits;
    
    UGbxMeshWidget();
};

