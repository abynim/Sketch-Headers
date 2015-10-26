#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class MSImageData, NSData, NSImage;

@interface MSImageProxy : NSObject <NSCopying, NSCoding>
{
    NSImage *_rawImage;
    NSData *_sha1;
    MSImageData *_imageData;
}

+ (id)proxyWithImage:(id)arg1 convertColorSpace:(BOOL)arg2 collection:(id)arg3;
+ (id)proxyWithImageData:(id)arg1;
+ (id)proxyWithHash:(id)arg1;
+ (id)proxyWithImage:(id)arg1;
@property(retain, nonatomic) MSImageData *imageData; // @synthesize imageData=_imageData;
@property(retain, nonatomic) NSData *sha1; // @synthesize sha1=_sha1;
@property(retain, nonatomic) NSImage *rawImage; // @synthesize rawImage=_rawImage;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)resolveImageWithCollection:(id)arg1;
- (void)resolveImageWithOwner:(id)arg1;
- (BOOL)needsResolving;
- (id)imageHash;
- (id)NSImageByResolvingWithOwner:(id)arg1;
- (id)NSImage;
- (id)treeAsDictionary;

@end

