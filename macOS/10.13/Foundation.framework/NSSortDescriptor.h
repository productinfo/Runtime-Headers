/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
 */

@interface NSSortDescriptor : NSObject <NSCopying, NSSecureCoding> {
    NSString * _key;
    SEL  _selector;
    id  _selectorOrBlock;
    unsigned long long  _sortDescriptorFlags;
}

@property (atomic, readonly) BOOL ascending;
@property (atomic, readonly) id comparator;
@property (atomic, readonly, copy) NSString *key;
@property (atomic, readonly, retain) id reversedSortDescriptor;
@property (atomic, readonly) SEL selector;

+ (id)_defaultSelectorName;
+ (void)initialize;
+ (id)sortDescriptorWithKey:(id)arg1 ascending:(BOOL)arg2;
+ (id)sortDescriptorWithKey:(id)arg1 ascending:(BOOL)arg2 comparator:(id)arg3;
+ (id)sortDescriptorWithKey:(id)arg1 ascending:(BOOL)arg2 selector:(SEL)arg3;
+ (BOOL)supportsSecureCoding;

- (void)_disallowEvaluation;
- (BOOL)_isEqualToSortDescriptor:(id)arg1;
- (id)_selectorName;
- (void)_setAscending:(BOOL)arg1;
- (void)_setKey:(id)arg1;
- (void)_setSelectorName:(id)arg1;
- (void)allowEvaluation;
- (BOOL)ascending;
- (id)comparator;
- (long long)compareObject:(id)arg1 toObject:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKey:(id)arg1 ascending:(BOOL)arg2;
- (id)initWithKey:(id)arg1 ascending:(BOOL)arg2 comparator:(id)arg3;
- (id)initWithKey:(id)arg1 ascending:(BOOL)arg2 selector:(SEL)arg3;
- (BOOL)isEqual:(id)arg1;
- (id)key;
- (id)reversedSortDescriptor;
- (SEL)selector;

// NSSortDescriptor (NSSortDescriptorPortCoding)

- (id)replacementObjectForPortCoder:(id)arg1;

@end