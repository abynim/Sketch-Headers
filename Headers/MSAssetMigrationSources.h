#import "NSObject.h"

@class MSVersionedArchive, NSURL;

@interface MSAssetMigrationSources : NSObject
{
    MSVersionedArchive *_colorArchive;
    MSVersionedArchive *_gradientArchive;
    NSURL *_imageURL;
}

@property(copy, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(retain, nonatomic) MSVersionedArchive *gradientArchive; // @synthesize gradientArchive=_gradientArchive;
@property(retain, nonatomic) MSVersionedArchive *colorArchive; // @synthesize colorArchive=_colorArchive;
- (void).cxx_destruct;

@end

