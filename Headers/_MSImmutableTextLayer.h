#import "MSImmutableStyledLayer.h"

@class NSTextStorage;

@interface _MSImmutableTextLayer : MSImmutableStyledLayer
{
    BOOL _automaticallyDrawOnUnderlyingPath;
    BOOL _dontSynchroniseWithSymbol;
    BOOL _heightIsClipped;
    NSTextStorage *_storage;
    long long _textBehaviour;
    BOOL _usesNewLineSpacingBehaviour;
}

@property(nonatomic) BOOL usesNewLineSpacingBehaviour; // @synthesize usesNewLineSpacingBehaviour=_usesNewLineSpacingBehaviour;
@property(nonatomic) long long textBehaviour; // @synthesize textBehaviour=_textBehaviour;
@property(retain, nonatomic) NSTextStorage *storage; // @synthesize storage=_storage;
@property(nonatomic) BOOL heightIsClipped; // @synthesize heightIsClipped=_heightIsClipped;
@property(nonatomic) BOOL dontSynchroniseWithSymbol; // @synthesize dontSynchroniseWithSymbol=_dontSynchroniseWithSymbol;
@property(nonatomic) BOOL automaticallyDrawOnUnderlyingPath; // @synthesize automaticallyDrawOnUnderlyingPath=_automaticallyDrawOnUnderlyingPath;
- (void).cxx_destruct;
- (BOOL)hasDefaultValues;
- (void)decodePropertiesWithCoder:(id)arg1;
- (void)encodePropertiesWithCoder:(id)arg1;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;
- (id)initWithMutableModelObject:(id)arg1;

@end

