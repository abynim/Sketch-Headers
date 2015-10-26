#import "NSObject.h"

@class MSImageCollection, NSData, NSImage;

@interface MSImageData : NSObject
{
    NSData *_data;
    NSData *_sha1;
    NSImage *_image;
    MSImageCollection *_collection;
}

@property(nonatomic) __weak MSImageCollection *collection; // @synthesize collection=_collection;
@property(retain, nonatomic) NSImage *image; // @synthesize image=_image;
@property(retain, nonatomic) NSData *sha1; // @synthesize sha1=_sha1;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)imageInfo;
- (id)initWithImage:(id)arg1 data:(id)arg2 sha:(id)arg3 collection:(id)arg4;
- (id)treeAsDictionary;

@end

