//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MSImageMemoryCache : NSObject
{
    // Error parsing type: , name: cache
}

+ (id)shared;
- (void).cxx_destruct;
- (id)init;
- (void)setImage:(id)arg1 forKey:(id)arg2 size:(double)arg3 etag:(id)arg4;
- (void)updateCacheDateForKey:(id)arg1 size:(double)arg2;
- (id)imageForKey:(id)arg1 size:(double)arg2 etag:(id)arg3;

@end

