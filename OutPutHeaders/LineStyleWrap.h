/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UIFont, UIColor, NSString;

@interface LineStyleWrap : XXUnknownSuperclass {
	NSString* m_nsChars;
	UIColor* m_color;
	UIFont* m_font;
	float m_fOffset;
	BOOL m_bUnderline;
	float m_fRealLength;
}
@property(assign, nonatomic) float m_fRealLength;
@property(assign, nonatomic) BOOL m_bUnderline;
@property(assign, nonatomic) float m_fOffset;
@property(retain, nonatomic) UIFont* m_font;
@property(retain, nonatomic) UIColor* m_color;
@property(retain, nonatomic) NSString* m_nsChars;
-(void).cxx_destruct;
-(int)compare:(id)compare;
@end

