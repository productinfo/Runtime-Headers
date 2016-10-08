/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
 */

@interface NSXMLNode : NSObject <NSCopying> {
    unsigned int  _index;
    unsigned int  _kind;
    id  _objectValue;
    NSXMLNode * _parent;
    int  _private;
}

@property (atomic, readwrite, copy) NSString *URI;
@property (atomic, readonly, copy) NSString *XMLString;
@property (atomic, readonly, copy) NSString *XPath;
@property (atomic, readonly) unsigned long long childCount;
@property (atomic, readonly, copy) NSArray *children;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long index;
@property (atomic, readonly) unsigned long long kind;
@property (atomic, readonly) unsigned long long level;
@property (atomic, readonly, copy) NSString *localName;
@property (atomic, readwrite, copy) NSString *name;
@property (atomic, readonly, copy) NSXMLNode *nextNode;
@property (atomic, readonly, copy) NSXMLNode *nextSibling;
@property (atomic, readwrite, retain) id objectValue;
@property (atomic, readonly, copy) NSXMLNode *parent;
@property (atomic, readonly, copy) NSString *prefix;
@property (atomic, readonly, copy) NSXMLNode *previousNode;
@property (atomic, readonly, copy) NSXMLNode *previousSibling;
@property (atomic, readonly, retain) NSXMLDocument *rootDocument;
@property (atomic, readwrite, copy) NSString *stringValue;

+ (id)DTDNodeWithXMLString:(id)arg1;
+ (id)_alloc;
+ (id)_contentsOfHTMLData:(id)arg1 encoding:(id)arg2 strippingTagsSeparatedByString:(id)arg3;
+ (id)_contentsOfHTMLData:(id)arg1 strippingTagsSeparatedByString:(id)arg2;
+ (void)_escapeCharacters:(const unsigned short*)arg1 countOfCharacters:(unsigned long long)arg2 inString:(id)arg3 appendingToString:(id)arg4;
+ (void)_escapeHTMLAttributeCharacters:(id)arg1 withQuote:(unsigned short)arg2 appendingToString:(id)arg3;
+ (BOOL)_htmlFromTidyNode:(void*)arg1 tidyDoc:(void*)arg2 appendingToString:(id)arg3;
+ (id)_nodeFromLibXML2Node:(void*)arg1;
+ (id)_tidyHTMLBody:(id)arg1;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)attributeWithLocalName:(id)arg1 URI:(id)arg2 stringValue:(id)arg3;
+ (id)attributeWithName:(id)arg1 URI:(id)arg2 stringValue:(id)arg3;
+ (id)attributeWithName:(id)arg1 stringValue:(id)arg2;
+ (id)commentWithStringValue:(id)arg1;
+ (id)document;
+ (id)documentWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
+ (id)documentWithRootElement:(id)arg1;
+ (id)elementWithLocalName:(id)arg1 URI:(id)arg2;
+ (id)elementWithName:(id)arg1;
+ (id)elementWithName:(id)arg1 URI:(id)arg2;
+ (id)elementWithName:(id)arg1 children:(id)arg2 attributes:(id)arg3;
+ (id)elementWithName:(id)arg1 stringValue:(id)arg2;
+ (id)localNameForName:(id)arg1;
+ (id)namespaceWithName:(id)arg1 stringValue:(id)arg2;
+ (id)predefinedNamespaceForPrefix:(id)arg1;
+ (id)prefixForName:(id)arg1;
+ (id)processingInstructionWithName:(id)arg1 stringValue:(id)arg2;
+ (id)textWithStringValue:(id)arg1;

- (id)URI;
- (id)XMLData;
- (id)XMLString;
- (id)XMLStringWithOptions:(unsigned long long)arg1;
- (id)XPath;
- (void)_XMLStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;
- (void)_setIndex:(unsigned long long)arg1;
- (void)_setKind:(unsigned long long)arg1;
- (void)_setParent:(id)arg1;
- (void)_setURI:(id)arg1;
- (id)canonicalXMLStringPreservingComments:(BOOL)arg1;
- (id)childAtIndex:(unsigned long long)arg1;
- (unsigned long long)childCount;
- (id)children;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)detach;
- (unsigned long long)hash;
- (unsigned long long)index;
- (id)init;
- (id)initWithKind:(unsigned long long)arg1;
- (id)initWithKind:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)kind;
- (unsigned long long)level;
- (id)localName;
- (id)name;
- (id)nextNode;
- (id)nextSibling;
- (id)nodesForXPath:(id)arg1 error:(id*)arg2;
- (id)objectValue;
- (id)objectsForXQuery:(id)arg1 constants:(id)arg2 error:(id*)arg3;
- (id)objectsForXQuery:(id)arg1 error:(id*)arg2;
- (id)parent;
- (id)prefix;
- (id)previousNode;
- (id)previousSibling;
- (id)rootDocument;
- (void)setName:(id)arg1;
- (void)setObjectValue:(id)arg1;
- (void)setStringValue:(id)arg1;
- (void)setStringValue:(id)arg1 resolvingEntities:(BOOL)arg2;
- (void)setURI:(id)arg1;
- (id)stringValue;

@end
