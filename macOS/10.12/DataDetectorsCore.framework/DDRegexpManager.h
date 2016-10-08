/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/Versions/A/DataDetectorsCore
 */

@interface DDRegexpManager : NSObject <DDTypeCheckerDelegate> {
    BOOL  _allowsRedefinition;
    NSMutableSet * _alreadyLoadedFiles;
    BOOL  _defaultSentinelsEnabled;
    NSMutableArray * _errors;
    NSMutableArray * _fileNamesStack;
    NSMutableString * _icuPrelude;
    NSMutableSet * _icuVariables;
    struct __CFDate { } * _lastMod;
    NSMutableArray * _level1Regexs;
    NSArray * _loadPaths;
    struct __DDLookupTable { } * _lookupTable;
    int  _maxTokenId;
    NSMutableDictionary * _regExpesByName;
    struct __CFDictionary { } * _regexpToIdent;
    NSMutableArray * _ruleAcceptancePredicates;
    NSArray * _searchPaths;
    NSMutableArray * _seenXMLFiles;
    NSMutableString * _signature;
    NSMutableArray * _topRegexes;
    NSMutableDictionary * _typeByName;
    int  _typeCheckingMethod;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readwrite) BOOL defaultSentinelsEnabled;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) NSMutableArray *ruleAcceptancePredicates;
@property (atomic, readonly) Class superclass;

+ (id)_defaultLanguages;
+ (id)additionalPluginSearchPaths;

- (void)_popFileName;
- (void)_pushFileName:(id)arg1;
- (void)dealloc;
- (BOOL)defaultSentinelsEnabled;
- (id)init;
- (BOOL)loadAllFilesInDirectory:(id)arg1 error:(id*)arg2;
- (BOOL)loadAllPatternsForLanguages:(id)arg1 error:(id*)arg2;
- (BOOL)loadAllPatternsInBundle:(id)arg1 forLanguage:(id)arg2 error:(id*)arg3;
- (BOOL)loadAllPatternsInBundle:(id)arg1 forLanguages:(id)arg2 error:(id*)arg3;
- (BOOL)loadEverything:(id*)arg1;
- (BOOL)loadFileWithName:(id)arg1 fromBundle:(id)arg2 forLocale:(id)arg3 error:(id*)arg4;
- (BOOL)loadString:(id)arg1 filename:(id)arg2 forLocale:(id)arg3 error:(id*)arg4;
- (BOOL)loadString:(id)arg1 withSignature:(id)arg2 filename:(id)arg3 forLocale:(id)arg4 error:(id*)arg5;
- (id)loadedXMLFiles;
- (id)ruleAcceptancePredicates;
- (void)setDefaultSentinelsEnabled:(BOOL)arg1;

// DDRegexpManager (Compiler)

- (struct __DDScanner { }*)createScanner;

// DDRegexpManager (CompilerInternal)

+ (id)_standardManager;

- (struct { long long x1; long long x2; })ICULexemRanges;
- (id)ICURulesWithMaxIdentifierRef:(long long*)arg1;
- (void)_split;
- (struct __CFDictionary { }*)copyRulesForIdentifier;
- (struct __DDCache { }*)createCacheWithSignature:(id)arg1;
- (struct __DDScanner { }*)createScannerWithSignature:(id)arg1;
- (struct __DDLookupTable { }*)lookupTable;

// DDRegexpManager (CompilerPrivate)

- (struct __CFData { }*)copyLexerTableData;
- (struct __CFData { }*)copyLookupTableData;
- (void)defineICUVariableWithName:(id)arg1 icuExpression:(id)arg2;
- (BOOL)isICUVariableDefined:(id)arg1;
- (id)newDictionaryPatternWithFileName:(id)arg1 position:(struct __DDExpressionPosition { int x1; int x2; int x3; int x4; })arg2;
- (id)newNERRequest:(id)arg1;
- (id)newPatternWithOptionalSourceTable:(id)arg1;
- (id)newPatternWithString:(id)arg1 stringType:(int)arg2;

// DDRegexpManager (DDTypeCheckerDelegateImplementation)

- (void)addTypingError:(id)arg1;

// DDRegexpManager (Parsing)

- (id)errors;

// DDRegexpManager (Private)

+ (id)_frameworkBundle;

- (BOOL)_loadFromSearchPathFileWithName:(id)arg1 error:(id*)arg2;
- (void)addPattern:(id)arg1;
- (id)allPatterns;
- (BOOL)allowsRedefinition;
- (id)definePatternWithName:(id)arg1 value:(id)arg2 info:(id)arg3;
- (void)defineTypeWithName:(id)arg1 value:(id)arg2 location:(id)arg3;
- (void)dumpAll;
- (id)expressionWithName:(id)arg1;
- (BOOL)hasPatternWithName:(id)arg1;
- (BOOL)importFileWithName:(id)arg1 error:(id*)arg2;
- (id)includedFileURLForName:(id)arg1;
- (id)patternWithName:(id)arg1;
- (id)regExpesByName;
- (void)setAllowsRedefinition:(BOOL)arg1;
- (void)setRegExpesByName:(id)arg1;
- (void)setTypeCheckingMode:(int)arg1;

// DDRegexpManager (PrivateMethods)

- (void)_addToSearchPath:(id)arg1;
- (BOOL)_loadAllPatternsInLoadPaths:(id*)arg1;
- (void)_loadKernelFallbackPath:(id)arg1;
- (id)_pathsForBundle:(id)arg1 forLanguages:(id)arg2;
- (BOOL)_reallyLoadFileAtPath:(id)arg1 error:(id*)arg2;
- (void)_setLoadPaths:(id)arg1;
- (void)_setPathsForBundle:(id)arg1 forLanguages:(id)arg2;
- (void)_setPathsForBundle:(id)arg1 locale:(id)arg2;
- (void)_setSearchPaths:(id)arg1;
- (id)_signatureFromXMLDocument:(id)arg1;
- (id)_signatureWithProvider:(id)arg1 andLanguage:(id)arg2 andKind:(id)arg3;
- (BOOL)_tryLoadFileWithName:(id)arg1 atPath:(id)arg2 error:(id*)arg3;

// DDRegexpManager (RegexpSplitterImplementation)

- (id)addElementaryPattern:(id)arg1;

@end
