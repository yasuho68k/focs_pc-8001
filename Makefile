#
#	makefile for FOCS
#

TARGET=focs
AS=ailz80asm

$(TARGET).bin: $(TARGET).z80 $(TARGET).inc
	$(AS) $(TARGET).z80 -bin -cmt -lst -f

clean:
	-rm *.bin *.cmt *.lst

