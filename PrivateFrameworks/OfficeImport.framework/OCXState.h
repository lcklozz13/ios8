/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class CXNamespace, NSString;

// Not exported
@interface OCXState : NSObject
{
    int mXMLFormat;
    CXNamespace *mOCXRelationshipsNamespace;
    CXNamespace *mOCXDrawingNamespace;
}

@property(retain, nonatomic) CXNamespace *OCXDrawingNamespace; // @synthesize OCXDrawingNamespace=mOCXDrawingNamespace;
@property(retain, nonatomic) CXNamespace *OCXRelationshipsNamespace; // @synthesize OCXRelationshipsNamespace=mOCXRelationshipsNamespace;
@property(readonly, nonatomic) int xmlFormat; // @synthesize xmlFormat=mXMLFormat;
- (id)OCXSettingsRelationshipType;
- (id)OCXTableStylesRelationshipType;
- (id)OCXPackageViewPropsRelationshipType;
- (id)OCXPackagePresPropsRelationshipType;
- (id)OCXNumberingRelationshipType;
- (id)OCXNotesMasterRelationshipType;
- (id)OCXVmlDrawingRelationshipType;
- (id)OCXThemeOverrideRelationshipType;
@property(readonly, copy, nonatomic) NSString *OCXThemeRelationshipType; // @dynamic OCXThemeRelationshipType;
- (id)OCXLegacyDocTextInfoRelationshipType;
- (id)OCXCustomXmlRelationshipType;
- (id)OCXCommentAuthorsRelationshipType;
- (id)OCXNotesSlideRelationshipType;
- (id)OCXSlideLayoutRelationshipType;
- (id)OCXTableRelationshipType;
- (id)OCXPivotTableRelationshipType;
- (id)OCXCommentsRelationshipType;
- (id)OCXFootnotesRelationshipType;
- (id)OCXFontTableRelationshipType;
- (id)OCXEndnotesRelationshipType;
- (id)OCXDrawingRelationshipType;
- (id)OCXSharedStringsRelationshipType;
- (id)OCXStylesRelationshipType;
- (void)setupNSForXMLFormat:(int)arg1;
- (void)dealloc;
- (id)init;
- (void)setXmlFormat:(int)arg1;

@end

