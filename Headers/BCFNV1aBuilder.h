//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface BCFNV1aBuilder : NSObject
{
    // Error parsing type: T, name: _currentHash
}

+ (void)initialize;
@property(readonly, nonatomic) NSString *checksum;
- (void)addString:(id)arg1;
- (void)addData:(id)arg1;
- (void)addBytes:(char *)arg1 length:(unsigned long long)arg2;
- (id)init;

@end

