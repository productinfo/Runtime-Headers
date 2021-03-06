/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/vCard.framework/Versions/A/vCard
 */

@interface CNVCardLineFactory : NSObject <CNVCardLineFactory>

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

+ (id)version21LineFactory;
+ (id)version30LineFactory;

- (id)arrayLineWithName:(id)arg1 value:(id)arg2;
- (id)arrayLineWithName:(id)arg1 value:(id)arg2 itemSeparator:(id)arg3;
- (id)dataLineWithName:(id)arg1 value:(id)arg2;
- (id)lineWithLiteralValue:(id)arg1;
- (id)stringLineWithName:(id)arg1 value:(id)arg2;
- (id)versionPlaceholderLine;

@end
