#import "NSObject.h"

#import "NSCoding.h"

@class NSDictionary;

@interface MSModelFileHeader : NSObject <NSCoding>
{
    long long _version;
    NSDictionary *_metadata;
    id _root;
}

+ (id)latestMetadata;
@property(retain, nonatomic) id root; // @synthesize root=_root;
@property(retain, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(nonatomic) long long version; // @synthesize version=_version;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

