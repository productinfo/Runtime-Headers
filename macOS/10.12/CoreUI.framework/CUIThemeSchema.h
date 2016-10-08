/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/Versions/A/CoreUI
 */

@interface CUIThemeSchema : NSObject

+ (id)defaultSchema;
+ (id)schemaForPlatform:(long long)arg1;

- (const struct { long long x1; char *x2; char *x3; }*)categoryForElementDefinition:(const struct { char *x1; char *x2; BOOL x3; long long x4; struct { char *x_5_1_1; char *x_5_1_2; struct _renditionkeytoken { unsigned short x_3_2_1; unsigned short x_3_2_2; } x_5_1_3[5]; long long x_5_1_4; long long x_5_1_5; struct { char *x_6_2_1; char *x_6_2_2; long long x_6_2_3; unsigned long long x_6_2_4; } x_5_1_6[12]; } x5[7]; }*)arg1;
- (unsigned long long)dimensionDefinitionCountForPartDefinition:(const struct { char *x1; char *x2; struct _renditionkeytoken { unsigned short x_3_1_1; unsigned short x_3_1_2; } x3[5]; long long x4; long long x5; struct { char *x_6_1_1; char *x_6_1_2; long long x_6_1_3; unsigned long long x_6_1_4; } x6[12]; }*)arg1;
- (const struct { char *x1; char *x2; BOOL x3; long long x4; struct { char *x_5_1_1; char *x_5_1_2; struct _renditionkeytoken { unsigned short x_3_2_1; unsigned short x_3_2_2; } x_5_1_3[5]; long long x_5_1_4; long long x_5_1_5; struct { char *x_6_2_1; char *x_6_2_2; long long x_6_2_3; unsigned long long x_6_2_4; } x_5_1_6[12]; } x5[7]; }*)effectDefinitionAtIndex:(unsigned long long)arg1;
- (unsigned long long)effectDefinitionCount;
- (const struct { char *x1; char *x2; BOOL x3; long long x4; struct { char *x_5_1_1; char *x_5_1_2; struct _renditionkeytoken { unsigned short x_3_2_1; unsigned short x_3_2_2; } x_5_1_3[5]; long long x_5_1_4; long long x_5_1_5; struct { char *x_6_2_1; char *x_6_2_2; long long x_6_2_3; unsigned long long x_6_2_4; } x_5_1_6[12]; } x5[7]; }*)effectDefinitionWithName:(id)arg1;
- (const struct { long long x1; char *x2; char *x3; }*)elementCategoryAtIndex:(unsigned long long)arg1;
- (unsigned long long)elementCategoryCount;
- (const struct { char *x1; char *x2; BOOL x3; long long x4; struct { char *x_5_1_1; char *x_5_1_2; struct _renditionkeytoken { unsigned short x_3_2_1; unsigned short x_3_2_2; } x_5_1_3[5]; long long x_5_1_4; long long x_5_1_5; struct { char *x_6_2_1; char *x_6_2_2; long long x_6_2_3; unsigned long long x_6_2_4; } x_5_1_6[12]; } x5[7]; }*)elementDefinitionAtIndex:(unsigned long long)arg1;
- (unsigned long long)elementDefinitionCount;
- (const struct { char *x1; char *x2; BOOL x3; long long x4; struct { char *x_5_1_1; char *x_5_1_2; struct _renditionkeytoken { unsigned short x_3_2_1; unsigned short x_3_2_2; } x_5_1_3[5]; long long x_5_1_4; long long x_5_1_5; struct { char *x_6_2_1; char *x_6_2_2; long long x_6_2_3; unsigned long long x_6_2_4; } x_5_1_6[12]; } x5[7]; }*)elementDefinitionWithName:(id)arg1;
- (void)enumerateAvailableThemeAttributesInPartDefinition:(const struct { char *x1; char *x2; struct _renditionkeytoken { unsigned short x_3_1_1; unsigned short x_3_1_2; } x3[5]; long long x4; long long x5; struct { char *x_6_1_1; char *x_6_1_2; long long x_6_1_3; unsigned long long x_6_1_4; } x6[12]; }*)arg1 usingBlock:(id)arg2;
- (void)enumerateAvailableValuesForThemeAttribute:(int)arg1 inPartDefinition:(const struct { char *x1; char *x2; struct _renditionkeytoken { unsigned short x_3_1_1; unsigned short x_3_1_2; } x3[5]; long long x4; long long x5; struct { char *x_6_1_1; char *x_6_1_2; long long x_6_1_3; unsigned long long x_6_1_4; } x6[12]; }*)arg2 usingBlock:(id)arg3;
- (const struct { char *x1; char *x2; BOOL x3; long long x4; struct { char *x_5_1_1; char *x_5_1_2; struct _renditionkeytoken { unsigned short x_3_2_1; unsigned short x_3_2_2; } x_5_1_3[5]; long long x_5_1_4; long long x_5_1_5; struct { char *x_6_2_1; char *x_6_2_2; long long x_6_2_3; unsigned long long x_6_2_4; } x_5_1_6[12]; } x5[7]; }*)materialDefinitionAtIndex:(unsigned long long)arg1;
- (unsigned long long)materialDefinitionCount;
- (const struct { char *x1; char *x2; BOOL x3; long long x4; struct { char *x_5_1_1; char *x_5_1_2; struct _renditionkeytoken { unsigned short x_3_2_1; unsigned short x_3_2_2; } x_5_1_3[5]; long long x_5_1_4; long long x_5_1_5; struct { char *x_6_2_1; char *x_6_2_2; long long x_6_2_3; unsigned long long x_6_2_4; } x_5_1_6[12]; } x5[7]; }*)materialDefinitionWithName:(id)arg1;
- (unsigned long long)partDefinitionCountForEffectDefinition:(const struct { char *x1; char *x2; BOOL x3; long long x4; struct { char *x_5_1_1; char *x_5_1_2; struct _renditionkeytoken { unsigned short x_3_2_1; unsigned short x_3_2_2; } x_5_1_3[5]; long long x_5_1_4; long long x_5_1_5; struct { char *x_6_2_1; char *x_6_2_2; long long x_6_2_3; unsigned long long x_6_2_4; } x_5_1_6[12]; } x5[7]; }*)arg1;
- (unsigned long long)partDefinitionCountForElementDefinition:(const struct { char *x1; char *x2; BOOL x3; long long x4; struct { char *x_5_1_1; char *x_5_1_2; struct _renditionkeytoken { unsigned short x_3_2_1; unsigned short x_3_2_2; } x_5_1_3[5]; long long x_5_1_4; long long x_5_1_5; struct { char *x_6_2_1; char *x_6_2_2; long long x_6_2_3; unsigned long long x_6_2_4; } x_5_1_6[12]; } x5[7]; }*)arg1;
- (unsigned long long)partDefinitionCountForMaterialDefinition:(const struct { char *x1; char *x2; BOOL x3; long long x4; struct { char *x_5_1_1; char *x_5_1_2; struct _renditionkeytoken { unsigned short x_3_2_1; unsigned short x_3_2_2; } x_5_1_3[5]; long long x_5_1_4; long long x_5_1_5; struct { char *x_6_2_1; char *x_6_2_2; long long x_6_2_3; unsigned long long x_6_2_4; } x_5_1_6[12]; } x5[7]; }*)arg1;
- (const struct { char *x1; char *x2; struct _renditionkeytoken { unsigned short x_3_1_1; unsigned short x_3_1_2; } x3[5]; long long x4; long long x5; struct { char *x_6_1_1; char *x_6_1_2; long long x_6_1_3; unsigned long long x_6_1_4; } x6[12]; }*)partDefinitionForWidgetName:(id)arg1;
- (const struct { char *x1; char *x2; struct _renditionkeytoken { unsigned short x_3_1_1; unsigned short x_3_1_2; } x3[5]; long long x4; long long x5; struct { char *x_6_1_1; char *x_6_1_2; long long x_6_1_3; unsigned long long x_6_1_4; } x6[12]; }*)partDefinitionWithName:(id)arg1 forElementDefinition:(const struct { char *x1; char *x2; BOOL x3; long long x4; struct { char *x_5_1_1; char *x_5_1_2; struct _renditionkeytoken { unsigned short x_3_2_1; unsigned short x_3_2_2; } x_5_1_3[5]; long long x_5_1_4; long long x_5_1_5; struct { char *x_6_2_1; char *x_6_2_2; long long x_6_2_3; unsigned long long x_6_2_4; } x_5_1_6[12]; } x5[7]; }*)arg2;
- (id)schemaEffectRenditionsForPartDefinition:(const struct { char *x1; char *x2; struct _renditionkeytoken { unsigned short x_3_1_1; unsigned short x_3_1_2; } x3[5]; long long x4; long long x5; struct { char *x_6_1_1; char *x_6_1_2; long long x_6_1_3; unsigned long long x_6_1_4; } x6[12]; }*)arg1;
- (id)schemaMaterialRenditionsForPartDefinition:(const struct { char *x1; char *x2; struct _renditionkeytoken { unsigned short x_3_1_1; unsigned short x_3_1_2; } x3[5]; long long x4; long long x5; struct { char *x_6_1_1; char *x_6_1_2; long long x_6_1_3; unsigned long long x_6_1_4; } x6[12]; }*)arg1;
- (id)schemaRenditionsForPartDefinition:(const struct { char *x1; char *x2; struct _renditionkeytoken { unsigned short x_3_1_1; unsigned short x_3_1_2; } x3[5]; long long x4; long long x5; struct { char *x_6_1_1; char *x_6_1_2; long long x_6_1_3; unsigned long long x_6_1_4; } x6[12]; }*)arg1;
- (long long)schemaVersion;
- (const struct { char *x1; char *x2; BOOL x3; long long x4; struct { char *x_5_1_1; char *x_5_1_2; struct _renditionkeytoken { unsigned short x_3_2_1; unsigned short x_3_2_2; } x_5_1_3[5]; long long x_5_1_4; long long x_5_1_5; struct { char *x_6_2_1; char *x_6_2_2; long long x_6_2_3; unsigned long long x_6_2_4; } x_5_1_6[12]; } x5[7]; }*)sortedEffectDefinitionAtIndex:(unsigned long long)arg1;
- (const struct { char *x1; char *x2; BOOL x3; long long x4; struct { char *x_5_1_1; char *x_5_1_2; struct _renditionkeytoken { unsigned short x_3_2_1; unsigned short x_3_2_2; } x_5_1_3[5]; long long x_5_1_4; long long x_5_1_5; struct { char *x_6_2_1; char *x_6_2_2; long long x_6_2_3; unsigned long long x_6_2_4; } x_5_1_6[12]; } x5[7]; }*)sortedElementDefinitionAtIndex:(unsigned long long)arg1;
- (const struct { char *x1; char *x2; BOOL x3; long long x4; struct { char *x_5_1_1; char *x_5_1_2; struct _renditionkeytoken { unsigned short x_3_2_1; unsigned short x_3_2_2; } x_5_1_3[5]; long long x_5_1_4; long long x_5_1_5; struct { char *x_6_2_1; char *x_6_2_2; long long x_6_2_3; unsigned long long x_6_2_4; } x_5_1_6[12]; } x5[7]; }*)sortedMaterialDefinitionAtIndex:(unsigned long long)arg1;
- (id)widgetNameForPartDefinition:(const struct { char *x1; char *x2; struct _renditionkeytoken { unsigned short x_3_1_1; unsigned short x_3_1_2; } x3[5]; long long x4; long long x5; struct { char *x_6_1_1; char *x_6_1_2; long long x_6_1_3; unsigned long long x_6_1_4; } x6[12]; }*)arg1;

@end
