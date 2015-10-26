#import "NSObject.h"

#import "NSCopying.h"

@class MSImageCollection, NSData, NSImage;

@interface MSImageData : NSObject <NSCopying>
{
    NSImage *_image;
    NSData *_data;
    NSData *_sha1;
    MSImageCollection *_collection;
}

@property(retain, nonatomic) MSImageCollection *collection; // @synthesize collection=_collection;
@property(retain, nonatomic) NSData *sha1; // @synthesize sha1=_sha1;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(retain, nonatomic) NSImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)imageInfo;
- (id)initWithImage:(id)arg1 data:(id)arg2 sha:(id)arg3 collection:(id)arg4;
- (id)treeAsDictionary;

@end

