; Elite Acorn Atom version KC 2012
;
; Elitedata 
;   load: $0e00
;   exec: $1c00
;

L0004	= 4
L0005	= 5
L0026	= $26

L0070	= $70
L0071	= $71
L0072	= $72
L0073	= $73
L0074	= $74
L0075	= $75
L0076	= $76

L0078	= $78
L0079	= $79
L007A	= $7A
L007B	= $7B

L0081	= $81

L0083	= $83
L0084	= $84
L0085	= $85
L0086	= $86
L0087	= $87
L0088	= $88
L0089	= $89
L008A	= $8A

L0138	= $138

L0202	= $202
L0203	= $203
L0204	= $204
L0205	= $205
L0207	= $207
L020E	= $20e
L020F	= $20f

L0224	= $224
L0225	= $225
L0228	= $228
L0229	= $229

L0CC4	= $cc4
L0CAF	= $caf
L0D02	= $d02
L0D03	= $d03
L0D08	= $d08
L0D0A	= $d0a
L0D0B	= $d0b
L0D0C	= $d0c
L0D0D	= $d0d
L0D0E	= $d0e
L0D0F	= $d0f
L0D73	= $d73

L65D0	= $65d0
L92D0	= $92d0

LFFD4	= L1C91-1
LFFF4	= L1C91-1

;------------------------------------------------
; Graphic data Panel
;------------------------------------------------

L1200:
            .byte $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
            .byte $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
            .byte $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
            .byte $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
            .byte $C0,$00,$00,$00,$00,$00,$E3,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$E3
            .byte $10,$E3,$00,$00,$00,$00,$00,$03
            .byte $DF,$7C,$00,$00,$00,$00,$EC,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$EC
            .byte $00,$3B,$00,$00,$00,$00,$3E,$FB
            .byte $D8,$60,$00,$00,$00,$00,$F0,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$F0
            .byte $10,$3F,$00,$00,$00,$00,$30,$CB
            .byte $DF,$7C,$00,$00,$00,$00,$C0,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$F0
            .byte $00,$0F,$00,$00,$00,$00,$3E,$FB
            .byte $D8,$0C,$00,$00,$00,$00,$C0,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$E0
            .byte $10,$0F,$00,$00,$00,$00,$06,$C3
            .byte $D8,$7C,$00,$00,$00,$00,$C0,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$E0
            .byte $00,$07,$33,$33,$33,$33,$3E,$C3
            .byte $C0,$00,$FF,$FF,$FF,$FF,$C0,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$C0
            .byte $10,$07,$FF,$FF,$FF,$FF,$00,$03
            .byte $C0,$00,$00,$00,$00,$00,$C0,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$C0
            .byte $00,$03,$00,$00,$C0,$00,$00,$03
            .byte $C0,$00,$00,$00,$00,$00,$C0,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$C0
            .byte $00,$03,$00,$00,$C0,$00,$00,$03
            .byte $DF,$7C,$00,$00,$00,$00,$C0,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$EA
            .byte $82,$AB,$00,$00,$00,$00,$3E,$C3
            .byte $DB,$60,$00,$00,$00,$00,$C0,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$C0
            .byte $00,$03,$00,$00,$00,$00,$32,$C3
            .byte $DF,$7C,$00,$00,$00,$00,$C0,$00
            .byte $00,$00,$00,$00,$02,$28,$8A,$2A
            .byte $88,$A2,$20,$00,$00,$00,$00,$C0
            .byte $00,$03,$00,$00,$00,$00,$3E,$C3
            .byte $DB,$0C,$00,$00,$00,$00,$C0,$00
            .byte $00,$00,$00,$00,$A0,$C0,$00,$00
            .byte $00,$00,$C8,$A0,$00,$00,$00,$60
            .byte $10,$03,$00,$00,$C0,$00,$34,$C3
            .byte $DB,$7C,$00,$00,$00,$00,$C0,$00
            .byte $00,$00,$01,$28,$08,$00,$00,$08
            .byte $00,$00,$08,$02,$80,$00,$00,$60
            .byte $00,$07,$0C,$CC,$CC,$CC,$36,$FB
            .byte $C0,$00,$FF,$FF,$FF,$FF,$C0,$00
            .byte $00,$00,$28,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$0A,$00,$00,$60
            .byte $10,$07,$FF,$FF,$FF,$FF,$00,$03
            .byte $C0,$00,$00,$00,$00,$00,$C0,$00
            .byte $00,$02,$00,$00,$20,$0C,$00,$08
            .byte $00,$0C,$02,$00,$00,$40,$00,$30
            .byte $00,$0F,$00,$00,$C0,$00,$00,$03
            .byte $C0,$00,$00,$00,$00,$00,$C0,$00
            .byte $00,$28,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$0A,$00,$30
            .byte $10,$0F,$00,$00,$C0,$00,$00,$03
            .byte $DF,$6C,$00,$00,$00,$00,$C0,$00
            .byte $00,$80,$00,$00,$80,$00,$00,$08
            .byte $00,$00,$00,$80,$00,$00,$80,$1C
            .byte $00,$3F,$00,$00,$00,$00,$3C,$FB
            .byte $D8,$6C,$00,$00,$00,$00,$C0,$00
            .byte $0A,$08,$88,$88,$88,$88,$C8,$80
            .byte $88,$C8,$88,$08,$88,$88,$28,$0C
            .byte $10,$3B,$00,$00,$00,$00,$36,$C3
            .byte $DF,$6C,$00,$00,$00,$00,$C0,$00
            .byte $20,$00,$00,$02,$00,$00,$00,$08
            .byte $00,$00,$00,$20,$00,$00,$02,$07
            .byte $00,$E3,$00,$00,$00,$00,$36,$C3
            .byte $D8,$6C,$00,$00,$00,$00,$C0,$00
            .byte $80,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$81
            .byte $FF,$FF,$00,$00,$C0,$00,$36,$C3
            .byte $D8,$7C,$C3,$0C,$30,$C3,$C0,$02
            .byte $00,$00,$00,$08,$00,$00,$0C,$08
            .byte $0C,$00,$00,$08,$00,$00,$00,$20
            .byte $00,$03,$0C,$30,$C3,$0C,$3C,$FB
            .byte $C0,$00,$FF,$FF,$FF,$FF,$C0,$08
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$08
            .byte $00,$03,$FF,$FF,$FF,$FF,$00,$03
            .byte $C0,$00,$00,$00,$00,$00,$C0,$00
            .byte $00,$00,$00,$20,$00,$00,$00,$08
            .byte $00,$00,$00,$02,$00,$00,$00,$08
            .byte $00,$03,$00,$00,$00,$00,$00,$03
            .byte $C0,$00,$00,$00,$00,$00,$C0,$20
            .byte $00,$00,$00,$00,$00,$00,$00,$C0
            .byte $C0,$00,$00,$00,$00,$00,$00,$02
            .byte $00,$03,$00,$00,$00,$00,$03,$03
            .byte $DF,$7E,$00,$00,$00,$00,$C0,$20
            .byte $00,$00,$00,$80,$00,$00,$00,$08
            .byte $00,$00,$00,$00,$80,$00,$00,$02
            .byte $00,$03,$00,$00,$00,$00,$0F,$03
            .byte $D8,$18,$00,$00,$00,$00,$C0,$80
            .byte $00,$00,$00,$00,$00,$00,$00,$08
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $80,$03,$00,$00,$00,$00,$03,$03
            .byte $D8,$18,$00,$00,$00,$00,$C0,$88
            .byte $88,$88,$88,$88,$88,$88,$88,$9C
            .byte $88,$88,$88,$88,$88,$88,$88,$88
            .byte $00,$03,$00,$00,$00,$00,$03,$03
            .byte $D8,$18,$00,$00,$00,$00,$C0,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$7F
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $80,$03,$00,$00,$00,$00,$0F,$83
            .byte $DF,$18,$C0,$C0,$C0,$C0,$C0,$80
            .byte $00,$00,$08,$00,$00,$00,$00,$08
            .byte $00,$00,$00,$00,$08,$00,$00,$00
            .byte $00,$03,$00,$00,$00,$00,$00,$03
            .byte $C0,$00,$FF,$FF,$FF,$FF,$C0,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $80,$03,$FF,$FF,$FF,$FF,$00,$03
            .byte $C0,$00,$00,$00,$00,$00,$C0,$80
            .byte $00,$00,$20,$00,$00,$00,$00,$08
            .byte $00,$00,$00,$00,$02,$00,$00,$00
            .byte $80,$03,$00,$00,$00,$00,$0F,$83
            .byte $C0,$00,$00,$00,$00,$00,$C0,$20
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$02
            .byte $00,$03,$00,$00,$00,$00,$01,$83
            .byte $D8,$7E,$00,$00,$00,$00,$C0,$20
            .byte $00,$00,$80,$00,$00,$00,$00,$08
            .byte $00,$00,$00,$00,$00,$80,$00,$02
            .byte $00,$03,$00,$00,$00,$00,$0F,$83
            .byte $D8,$18,$00,$00,$00,$00,$C0,$08
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$0A
            .byte $00,$03,$00,$00,$00,$00,$0C,$03
            .byte $D8,$18,$00,$00,$00,$00,$C0,$08
            .byte $00,$02,$00,$00,$00,$00,$00,$08
            .byte $00,$00,$00,$00,$00,$20,$00,$08
            .byte $00,$03,$00,$00,$00,$00,$0F,$83
            .byte $D8,$18,$00,$00,$00,$00,$C0,$02
            .byte $80,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$20
            .byte $00,$03,$00,$00,$00,$00,$00,$03
            .byte $DF,$18,$C3,$0C,$30,$C0,$C0,$00
            .byte $88,$88,$88,$88,$88,$88,$88,$88
            .byte $88,$88,$88,$88,$88,$88,$88,$80
            .byte $00,$03,$00,$00,$00,$00,$00,$03
            .byte $C0,$00,$FF,$FF,$FF,$FF,$C0,$00
            .byte $20,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$02,$00
            .byte $00,$03,$FF,$FF,$FF,$FF,$00,$03
            .byte $C0,$00,$00,$00,$00,$00,$C0,$00
            .byte $08,$20,$00,$00,$00,$00,$00,$08
            .byte $00,$00,$00,$00,$00,$02,$10,$00
            .byte $00,$03,$00,$00,$00,$00,$0F,$83
            .byte $C0,$00,$00,$00,$00,$00,$C0,$00
            .byte $02,$80,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$80,$00
            .byte $00,$03,$00,$00,$00,$00,$01,$83
            .byte $DF,$60,$00,$00,$00,$00,$C0,$00
            .byte $00,$20,$00,$00,$00,$00,$00,$08
            .byte $00,$00,$00,$00,$00,$0A,$00,$00
            .byte $00,$03,$00,$00,$00,$00,$0F,$83
            .byte $DB,$60,$00,$00,$00,$00,$C0,$00
            .byte $00,$04,$80,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$A0,$00,$00
            .byte $00,$03,$00,$00,$00,$00,$01,$83
            .byte $DF,$60,$00,$00,$00,$00,$C0,$00
            .byte $00,$00,$28,$00,$00,$00,$00,$08
            .byte $00,$00,$00,$00,$28,$00,$00,$00
            .byte $00,$03,$00,$00,$00,$00,$0F,$83
            .byte $DB,$60,$00,$00,$00,$00,$C0,$00
            .byte $00,$00,$00,$A0,$00,$00,$00,$00
            .byte $00,$00,$00,$0A,$00,$00,$00,$00
            .byte $00,$03,$00,$00,$00,$00,$00,$03
            .byte $DB,$7C,$C3,$03,$03,$00,$C0,$00
            .byte $00,$00,$00,$02,$88,$00,$00,$08
            .byte $00,$00,$22,$80,$00,$00,$00,$00
            .byte $00,$03,$00,$00,$00,$00,$00,$03
            .byte $C0,$00,$FF,$FF,$FF,$FF,$C0,$00
            .byte $00,$00,$00,$00,$00,$A2,$28,$8A
            .byte $22,$88,$80,$00,$00,$00,$00,$00
            .byte $00,$03,$FF,$FF,$FF,$FF,$0C,$03
            .byte $C0,$00,$00,$00,$00,$00,$C0,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$03,$00,$00,$00,$00,$0C,$03
            .byte $DC,$00,$00,$00,$00,$00,$C0,$00
            .byte $00,$00,$00,$00,$00,$0F,$CC,$1E
            .byte $FC,$FC,$00,$00,$00,$00,$00,$00
            .byte $00,$03,$00,$00,$00,$00,$0D,$83
            .byte $DF,$F8,$00,$00,$00,$00,$C0,$00
            .byte $00,$00,$00,$00,$00,$0C,$0C,$0C
            .byte $30,$C0,$00,$00,$00,$00,$00,$00
            .byte $00,$03,$00,$00,$00,$00,$0D,$83
            .byte $C7,$DC,$00,$00,$00,$00,$C0,$00
            .byte $00,$00,$00,$00,$00,$0F,$0C,$0C
            .byte $30,$F0,$00,$00,$00,$00,$00,$00
            .byte $00,$03,$00,$00,$00,$00,$0F,$83
            .byte $DF,$F8,$00,$00,$00,$00,$F0,$00
            .byte $00,$00,$00,$00,$00,$0C,$0C,$0C
            .byte $30,$C0,$00,$00,$00,$00,$00,$00
            .byte $00,$0F,$00,$00,$00,$00,$01,$83
            .byte $DC,$00,$00,$00,$00,$00,$EC,$00
            .byte $00,$00,$00,$00,$00,$0F,$CF,$DE
            .byte $30,$FC,$00,$00,$00,$00,$00,$00
            .byte $00,$3B,$00,$00,$00,$00,$00,$03
            .byte $C0,$00,$00,$00,$00,$00,$E3,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$E3,$00,$00,$00,$00,$00,$03
            .byte $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
            .byte $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
            .byte $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
            .byte $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF

;------------------------------------------------
; Graphic data 'ELITE' text
;------------------------------------------------

L1900:
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$0F,$FF,$FF,$FF,$FF,$E1
            .byte $FF,$FF,$00,$00,$00,$3F,$FF,$FF
            .byte $FF,$FF,$87,$FF,$FF,$FF,$FF,$E0
            .byte $FF,$FF,$FF,$FF,$FC,$00,$00,$00
            .byte $00,$00,$7F,$FF,$E0,$00,$00,$07
            .byte $FF,$FE,$00,$00,$00,$00,$0F,$FF
            .byte $FC,$00,$00,$00,$7F,$FF,$C0,$00
            .byte $3F,$FF,$E0,$00,$00,$00,$00,$00
            .byte $00,$03,$FF,$FF,$00,$00,$00,$0F
            .byte $FF,$FC,$00,$00,$00,$00,$0F,$FF
            .byte $FC,$00,$00,$00,$7F,$FF,$E0,$00
            .byte $1F,$FF,$F8,$00,$00,$00,$00,$00
            .byte $00,$1F,$FF,$FF,$FF,$FE,$00,$3F
            .byte $FF,$F0,$00,$00,$00,$00,$0F,$FF
            .byte $FC,$00,$00,$00,$3F,$FF,$F8,$00
            .byte $07,$FF,$FF,$FF,$FF,$80,$00,$00
            .byte $00,$FF,$FF,$E0,$00,$00,$00,$FF
            .byte $FF,$E0,$00,$00,$00,$00,$0F,$FF
            .byte $FC,$00,$00,$00,$1F,$FF,$FC,$00
            .byte $01,$FF,$FF,$C0,$00,$00,$00,$00
            .byte $07,$FF,$FF,$80,$00,$00,$03,$FF
            .byte $FF,$C0,$00,$00,$00,$00,$1F,$FF
            .byte $FE,$00,$00,$00,$0F,$FF,$FE,$00
            .byte $00,$7F,$FF,$F0,$00,$00,$00,$00
            .byte $3F,$FF,$FF,$FF,$FF,$FE,$0F,$FF
            .byte $FF,$FF,$FF,$FF,$83,$FF,$FF,$FF
            .byte $FF,$FF,$E0,$00,$07,$FF,$FF,$80
            .byte $00,$1F,$FF,$FF,$FF,$FF,$FE,$00

;------------------------------------------------
; Graphic data 'ACORNSOFT' text
;------------------------------------------------

L1A00:
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $3F,$C0,$FF,$01,$FE,$1F,$FC,$3E
            .byte $7C,$3F,$E0,$7F,$83,$FF,$CF,$FF
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$0F
            .byte $8F,$8F,$9F,$1F,$1F,$3E,$3E,$3E
            .byte $7C,$7C,$7C,$F8,$F8,$F8,$00,$1F
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$7C
            .byte $7C,$7C,$00,$7C,$7C,$7C,$7C,$7F
            .byte $BE,$3E,$00,$3E,$3E,$3E,$00,$03
            .byte $E0,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$03,$FF
            .byte $F1,$F0,$00,$F8,$F8,$FF,$F0,$7F
            .byte $FE,$0F,$F8,$1F,$1F,$0F,$FE,$00
            .byte $7C,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$1F,$0F
            .byte $8F,$C0,$03,$E1,$F1,$FB,$E0,$7C
            .byte $FE,$00,$1F,$8F,$87,$C7,$E0,$00
            .byte $1F,$80,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$F8,$7C
            .byte $3F,$1F,$8F,$C7,$E3,$F0,$F8,$7C
            .byte $3E,$1F,$0F,$C7,$E3,$F1,$F8,$00
            .byte $03,$F0,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$07,$C3,$F0
            .byte $3F,$F0,$07,$FE,$07,$E1,$F8,$FC
            .byte $3F,$03,$FF,$00,$7F,$E0,$7E,$00
            .byte $00,$7E,$00,$00,$00,$00,$00,$00

;------------------------------------------------
; Graphic data '(C) ACORNSOFT 1984' text
;------------------------------------------------

L1B00:
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$38,$7C
            .byte $70,$00,$3F,$00,$00,$00,$00,$00
            .byte $00,$00,$F1,$C0,$00,$70,$7C,$7E
            .byte $0E,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$01,$C3,$B8
            .byte $70,$00,$E7,$00,$00,$00,$00,$00
            .byte $00,$01,$C0,$E0,$00,$7C,$77,$BB
            .byte $87,$80,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$0E,$0E,$00
            .byte $E0,$01,$DE,$7E,$3F,$3F,$9F,$C7
            .byte $F3,$F1,$E1,$FC,$00,$0E,$3D,$DE
            .byte $E3,$E0,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$38,$38,$03
            .byte $C0,$03,$FD,$CE,$E7,$7F,$9D,$EE
            .byte $07,$B9,$F8,$70,$00,$07,$07,$F3
            .byte $F3,$F8,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$01,$E0,$E0,$07
            .byte $00,$0F,$73,$81,$EE,$70,$3D,$E7
            .byte $E7,$BC,$F0,$38,$00,$03,$80,$39
            .byte $DE,$FF,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$03,$C3,$9C,$38
            .byte $00,$1C,$E7,$39,$DE,$F0,$3D,$C0
            .byte $73,$BC,$70,$3C,$00,$01,$E0,$3C
            .byte $F7,$83,$80,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$07,$87,$E1,$C0
            .byte $00,$39,$C7,$E1,$F8,$E0,$39,$CF
            .byte $E1,$F8,$78,$0F,$80,$03,$FC,$7C
            .byte $1F,$80,$E0,$00,$00,$00,$00,$00

;=====================================================
; Program entry
;=====================================================

L1C00:      jmp L1C94			; First entry

;=====================================================

L1C03:      .byte $16,$04				; MODE4
            .byte $1C,$08,$13,$17,$0A			; Text window 8,19,23,10
            .byte $17,$01				; Redef CHR(1)
            .byte $00,$00,$00,$00,$00,$00,$00,$00
L1C14:
            .byte $01,$01,$00,$6F,$F8,$04,$01,$08	; Envelope
            .byte $7E,$00,$00,$82,$7E,$7E
L1C22:
            .byte $02,$01,$0E,$EE,$FF,$2C,$20,$32	; Envelope
            .byte $06,$01,$00,$FE,$78,$7E
L1C30:
            .byte $03,$01,$01,$FF,$FD,$11,$20,$80	; Envelope
            .byte $01,$00,$00,$FF,$01,$01
L1C3E:
            .byte $04,$01,$04,$F8,$2C,$04,$06,$08	; Envelope
            .byte $16,$00,$00,$81,$7E,$00
L1C4C:
            .byte $6C,$FC,$FF

;--------------------------------------------
; Execute *FX A,X,Y
;--------------------------------------------

L1C4F:
	rts
;            ldy #$00
;            jmp LFFF4			; *FX A,X,Y

;--------------------------------------------
; Data
;--------------------------------------------

L1C54:      .byte "RUN ELITEcode",$0D
L1C62:      .byte "By D.Braben/I.Bell",$0D

L1C75:      .byte $B0,$F7,$FF
L1C78:      .byte $56,$1E	; EXEC $1E56
L1C7A:      .byte $D8

L1C7B:
;            .byte $06,$00		; Indirect JMP to $6
	
	ldy #0
copy_loop:
	lda (L0070),y
	sta (L0072),y
	iny
	bne copy_loop
	inc L0071
;	inc L0073
	dex
	bne L1C7B
	rts

;--------------------------------------------
; Called once with A=$95, X=$FF
;--------------------------------------------

L1C7D:
	; Reset var $7B
            ldy #$02
            sty L007B

	; Reset var $17A
            ldy #$18			; $17A=$18
            sty L007B,X
            rts
;--------------------------------------------

L1C91:
            .byte $CA
L1C92:
            bcc L1CDB+1

;--------------------------------------------
; Start
;--------------------------------------------

L1C94:
            lda #$60
            sta L0088

            lda #$20			; command=JSR
L1CDB:
	; Reset vars $79, $84, $86
            ldx #$03
            stx L0079
            stx L0084
            stx L0086

	; Change code and set vars
            ldx #$FF			; Offset
            lda #$95			; Code  $95=STA
            jsr L1C7D
L1CFD:
	; Reset vars $105-$125 in first entry
            ldx #$FF
            inx
L1D41:
            ldy #$00
L1D43:
            lda L1FF4,Y
L1D46:
            sta L0026,X			; Change code
					; $95=STA $0026,X
					; $55=EOR $006,X
            dex
            iny
            cpy #$21
            bne L1D43

	; Reset var $70=3
            lda #$03
            sta L0070

	; Reset var $71=$1C
            lda #$1C
            sta L0071

	; CLEAR4
	lda #$f0
	sta $b000

	lda #<$8000
	sta L0070
	lda #>$8000
	sta L0071

	lda #0
	tay
L1D5D:
	sta (L0070),y
	iny
	bne L1D5D
	inc L0071
	ldx L0071
	cpx #>$9800
	bne L1D5D

	; Reset A,X,Y=1
            lda #$01
            tax
            tay

	; Copy $1900-$1A00->$8200 'ELITE'
            ldx #$01
            lda #>L1900
            sta L0071			; $70/$71=$1900
            lda #>$8200
            sta L0073
            lda #<$8200
            sta L0072			; $72/$73=$8200
            ldy #$00
            jsr L1E4F			; Display graph

	; Copy $1A00-$1B00->$8000 'ACORNSOFT'
            ldx #$01
            lda #>L1A00
            sta L0071			; $70/$71=$1A00
            lda #>$8000
            sta L0073
            lda #<$8000
            sta L0072			; $72/$73=$8000
            ldy #$00
            jsr L1E4F			; Display graph

	; Copy $1B00-$1C00->$9000 '(C) ACORNSOFT 1984'
            ldx #$01
            lda #>L1B00
            sta L0071			; $70/$71=$1B00
            lda #>$9000
            sta L0073
            lda #<$9000
            sta L0072			; $72/$73=$9000
            ldy #$00
            jsr L1E4F			; Display graph

            jsr L1E71			; Display planet

	; Copy $1200-$1900->$9100 'panel'
            lda #>L1200
            sta L0071
            lda #>$9100
            sta L0073
            ldy #$00
            sty L0070			; $70/$71=$1200
            ldx #<$9100
            sty L0081			; $81=0
            stx L0072			; $72/$73=$9100
L1E0B:      ldx #$01
            jsr L1E4F			; Display panel
            clc
            inc L0073
            lda L0073
            cmp #>$9800
            bcc L1E0B

L1E39:

	jmp init	; Start sidplayer

;----------------------------------------------
L1E4F:
	jmp L1C7B

;----------------------------------------------

L1E52:      .byte $49			; Data for star plotting
L1E53:      .byte $53
L1E54:      .byte $78
L1E55:      .byte $6C

L1E56:      iny
            cpy #$4a
            bne L1E39

;----------------------------------------------
; Display stars and planet
;----------------------------------------------

; Plot planet

L1E71:					
            jsr L1F3E			; Update L1E53 and L1E52
            jsr L1F59              ; 20 59 1F
            sta L0071              ; 85 71
            lda L0072              ; A5 72
            sta L0070              ; 85 70
L1E7D:      jsr L1F3E			; Update L1E53 and L1E52
            sta L0074              ; 85 74
            jsr L1F59              ; 20 59 1F
            tax                    ; AA
            lda L0072              ; A5 72
            adc L0070              ; 65 70
            sta L0070              ; 85 70
            txa                    ; 8A
            adc L0071              ; 65 71
            bcs L1EB0              ; B0 1F
            sta L0071              ; 85 71
            lda #$01               ; Dec 1 vertical line = $140
            sbc L0070
            sta L0070
            lda #$40
            sbc L0071
            sta L0071
            bcc L1EB0              ; 90 0F
            jsr L1FBD              ; 20 BD 1F
            lda L0070              ; A5 70
            lsr A                  ; 4A
            tax                    ; AA
            lda L0074              ; A5 74
            cmp #$80               ; C9 80
            ror A                  ; 6A
	sec
	sbc #$30		; Move planet up
            jsr L1F76              ; Plot point
L1EB0:      dec L1FB7              ; Dec lo-byte counter
            bne L1E71
            dec L1FB8              ; Dec hi-byte counte
            bne L1E71

; Plot stars

            ldx #$C2               ; A2 C2
            stx L0085              ; 86 85
            ldx #$60               ; L0087:	RTS
            stx L0087

L1EC2:      jsr L1F3E              ; 20 3E 1F
            tax                    ; AA
L1EC6:      jsr L1F59              ; 20 59 1F
            sta L0071              ; 85 71
            jsr L1F3E              ; 20 3E 1F
            sta L0074              ; 85 74
            jsr L1F59              ; 20 59 1F
            adc L0071              ; 65 71
            cmp #$11               ; C9 11
            bcc L1EDE              ; 90 05
            lda L0074              ; A5 74
            jsr L1F76              ; Plot point
L1EDE:      dec L1FB9              ; Dec lo-byte counter
            bne L1EC2
            dec L1FBA              ; Dec hi-byte counter
            bne L1EC2

; Plot ring

            ldx L1C91              ; AE 91 1C
            stx L0078              ; 86 78
            ldx #$C6               ; A2 C6
            stx L0083              ; 86 83
L1EF1:      jsr L1F3E              ; 20 3E 1F
            sta L0070              ; 85 70
            jsr L1F59              ; 20 59 1F
            sta L0071              ; 85 71
            jsr L1F3E              ; 20 3E 1F
            sta L0074              ; 85 74
            jsr L1F59              ; 20 59 1F
            sta L0075              ; 85 75
            adc L0071              ; 65 71
            sta L0071              ; 85 71
            lda L0070              ; A5 70
            cmp #$80               ; C9 80
            ror A                  ; 6A
            cmp #$80               ; C9 80
            ror A                  ; 6A
            adc L0074              ; 65 74
            tax                    ; AA
            jsr L1F59              ; 20 59 1F
            tay                    ; A8
            adc L0071              ; 65 71
            bcs L1F34              ; B0 18
            cmp #$50               ; C9 50
            bcs L1F34              ; B0 14
            cmp #$20               ; C9 20
            bcc L1F34              ; 90 10
            tya                    ; 98
            adc L0075              ; 65 75
            cmp #$10               ; C9 10
            bcs L1F2F              ; B0 04
            lda L0070              ; A5 70
            bpl L1F34              ; 10 05
L1F2F:      lda L0074              ; A5 74
	sec
	sbc #$30		; Move ring up
            jsr L1F76              ; Plot point
L1F34:      dec L1FBB              ; Dec lo-byte star counter
            bne L1EF1
            dec L1FBC              ; Dec hi-byte star counter
            bne L1EF1

;----------------------------------------------
L1F3E:      lda L1E53			; L1E53=L1E53+L1E55
            tax
            adc L1E55
            sta L1E53
            stx L1E55			; L1E55=old L1E53

            lda L1E52			; L1E52=L1E52+L1E54
            tax
            adc L1E54
            sta L1E52
            stx L1E54			; L1E54=old L1E52
            rts

;----------------------------------------------
L1F59:      bpl L1F60              ; 10 05
            eor #$FF               ; 49 FF
            clc                    ; 18
            adc #$01               ; 69 01
L1F60:      sta L0073              ; 85 73
            sta L0072              ; 85 72
            lda #$00               ; A9 00
            ldy #$08               ; A0 08
            lsr L0072              ; 46 72
L1F6A:      bcc L1F6F              ; 90 03
            clc                    ; 18
            adc L0073              ; 65 73
L1F6F:      ror A                  ; 6A
            ror L0072              ; 66 72
            dey                    ; 88
            bne L1F6A              ; D0 F5
L1F75:      rts                    ; 60

;----------------------------------------------
; Plot pixel 
;    A = Y-pos pixel
;    X = X-pos pixel
;----------------------------------------------

L1F76:
	pha			; Save y-pos
	and #7
	tay			; Save y mod 8

	pla			; Get y-pos
	eor #$80		; If 120<=A<=127 -> Carry set
	cmp #$F8
	bcs L1F75
	lsr a
	lsr a
	lsr a
	clc
	adc #$80
	sta L0071		; L0071=y/8+$80

	lda row_byte,y		; Get lb address
	sta L0070 	

	txa			; Get x
	and #7
	tay			; Save x mod 8

	txa			; get x
	eor #$80		; If 120<=A<=127 -> Carry set
	and #$F8

	lsr a
	lsr a
	lsr a
	clc
	adc L0070
	sta L0070		; L0070=L0070+x/8

	tya			; Get x mod 8
	tax
	ldy #0
	lda pixel,X
	ora (L0070),Y
	sta (L0070),Y
	rts
row_byte:
	.byte 0,$20,$40,$60,$80,$a0,$c0,$e0
pixel:
	.byte $80,$40,$20,$10,$08,$04,$02,$01
;----------------------------------------------

L1FB7:      .byte $00		; Planet pixel counter
L1FB8:      .byte $05

L1FB9:      .byte $DD		; Star pixel counter
L1FBA:      .byte $01

L1FBB:      .byte $00		; Ring pixel counter
L1FBC:      .byte $05

;----------------------------------------------
L1FBD:      ldy L0071
            lda L0070
            sta L0073
L1FC3:
            ldx #$00               ; A2 00
            stx L0070              ; 86 70
            lda #$08               ; A9 08
            sta L0072              ; 85 72
L1FCB:      cpx L0070              ; E4 70
            bcc L1FDD              ; 90 0E
            bne L1FD5              ; D0 04
L1FD1:      cpy #$40               ; C0 40
            bcc L1FDD              ; 90 08
L1FD5:      tya                    ; 98
            sbc #$40               ; E9 40
            tay                    ; A8
            txa                    ; 8A
            sbc L0070              ; E5 70
            tax                    ; AA
L1FDD:      rol L0070              ; 26 70
            asl L0073              ; 06 73
            tya                    ; 98
            rol A                  ; 2A
            tay                    ; A8
            txa                    ; 8A
            rol A                  ; 2A
            tax                    ; AA
            asl L0073              ; 06 73
            tya                    ; 98
            rol A                  ; 2A
            tay                    ; A8
            txa                    ; 8A
            rol A                  ; 2A
            tax                    ; AA
            dec L0072              ; C6 72
            bne L1FCB              ; D0 D8
            rts                    ; 60

;--------------------------------------------
; Data
;--------------------------------------------

L1FF4:      .byte $1C,$78,$6C,$0B,$3D,$99,$0B,$3D
            .byte $59,$48,$0C,$1D,$B9,$68,$68,$60
            .byte $EF,$D0,$CA,$71,$E6,$73,$E6,$F6
            .byte $D0,$88,$72,$91,$1C,$4F,$59,$70
L2014:
            .byte $B1
