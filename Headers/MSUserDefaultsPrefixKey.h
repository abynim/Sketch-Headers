//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface MSUserDefaultsPrefixKey : NSObject <NSCopying>
{
    NSString *_keyPrefix;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *keyPrefix; // @synthesize keyPrefix=_keyPrefix;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPrefix:(id)arg1;

@end
