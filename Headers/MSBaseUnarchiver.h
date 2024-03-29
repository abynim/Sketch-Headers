//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSPointerArray;

@interface MSBaseUnarchiver : NSObject
{
    BOOL _corruptionDetected;
    long long _currentVersion;
    long long _archiveVersion;
    NSArray *_actualSymbolIDs;
    NSPointerArray *_decodedObjectStack;
    id _currentObject;
}

+ (id)unarchivedObjectFromData:(id)arg1 asVersion:(long long)arg2 corruptionDetected:(char *)arg3 error:(id *)arg4;
+ (id)unarchivedObjectFromData:(id)arg1 actualVersion:(long long *)arg2 error:(id *)arg3;
+ (id)unarchivedObjectFromData:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak id currentObject; // @synthesize currentObject=_currentObject;
@property(retain, nonatomic) NSPointerArray *decodedObjectStack; // @synthesize decodedObjectStack=_decodedObjectStack;
@property(retain, nonatomic) NSArray *actualSymbolIDs; // @synthesize actualSymbolIDs=_actualSymbolIDs;
@property(nonatomic) BOOL corruptionDetected; // @synthesize corruptionDetected=_corruptionDetected;
@property(nonatomic) long long archiveVersion; // @synthesize archiveVersion=_archiveVersion;
@property(nonatomic) long long currentVersion; // @synthesize currentVersion=_currentVersion;
- (id)decodeReferencesOfClass:(Class)arg1 forKey:(id)arg2;
- (id)instanciateObject:(id)arg1;
- (struct CGSize)decodeSizeForKey:(id)arg1 withDefault:(struct CGSize)arg2;
- (int)decodeInt32ForKey:(id)arg1 withDefault:(int)arg2;
- (long long)decodeIntegerForKey:(id)arg1 withDefault:(long long)arg2;
- (struct CGPoint)decodePointForKey:(id)arg1 withDefault:(struct CGPoint)arg2;
- (struct CGRect)decodeRectForKey:(id)arg1 withDefault:(struct CGRect)arg2;
- (BOOL)decodeBoolForKey:(id)arg1 withDefault:(BOOL)arg2;
- (double)decodeDoubleForKey:(id)arg1 withDefault:(double)arg2;
- (id)decodeObjectForKey:(id)arg1;
- (BOOL)containsValueForKey:(id)arg1;
- (id)decodeObjectOfClasses:(id)arg1 forKey:(id)arg2;
- (id)decodeObjectOfClass:(Class)arg1 forKey:(id)arg2;
- (id)init;
- (id)unarchivedObjectAsVersion:(long long)arg1 corruptionDetected:(char *)arg2 error:(id *)arg3;
- (id)decodeRoot;
- (id)initForReadingFromData:(id)arg1;

@end

