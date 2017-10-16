/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/PDFKit.framework/Versions/A/PDFKit
 */

@interface PDFAnnotationFreeText : PDFAnnotation <NSCoding, NSCopying> {
    PDFAnnotationFreeTextPrivateVars * _private2;
}

- (void).cxx_destruct;
- (unsigned long long)alignment;
- (struct __CFDictionary { }*)commonCreateDictionaryRef;
- (void)commonInit;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)drawWithBox:(long long)arg1 inContext:(struct CGContext { }*)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)font;
- (id)fontColor;
- (id)initWithAnnotationDictionary:(struct CGPDFDictionary { }*)arg1 forPage:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)setAlignment:(unsigned long long)arg1;
- (void)setFont:(id)arg1;
- (void)setFontColor:(id)arg1;
- (BOOL)supportsNSCoding;

@end