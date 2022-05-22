#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "UObject/NoExportTypes.h"
#include "GbxHUDLayoutTableRow.generated.h"

USTRUCT()
struct FGbxHUDLayoutTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector2D AnchorPosition;
    
    UPROPERTY(EditAnywhere)
    FVector2D Offset;
    
    UPROPERTY(EditAnywhere)
    FVector2D Scale;
    
    UPROPERTY(EditAnywhere)
    FString LibraryMovieString;
    
    GBXUI_API FGbxHUDLayoutTableRow();
};

